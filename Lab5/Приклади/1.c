
Метод Гауса — Зейделя

// Умова завершення
bool converge(double *xk, double* xkp)
{
    bool b = true;
    for (int i = 0; i < n; i++)
    {
        if (fabs(xk[i]-xkp[i]) > eps) 
        {
            b = false;
            break;
        }
    }
    return b;
}

while(!converge(x,p))
{
    for(int i = 0; i < n; i++)
    {
        var = 0;
        for(int j = 0; j < n; j++)
        {
            if(j != i)
                var += (a[i][j]*x[j]);
        }
        p[i] = x[i];
        x[i]=(b[i] - var)/a[i][i];
    }
}


http://ua-referat.com/%D0%86%D1%82%D0%B5%D1%80%D0%B0%D1%86%D1%96%D0%B9%D0%BD%D1%96_%D0%BC%D0%B5%D1%82%D0%BE%D0%B4%D0%B8_%D1%80%D0%BE%D0%B7%D0%B2%60%D1%8F%D0%B7%D0%B0%D0%BD%D0%BD%D1%8F_%D1%81%D0%B8%D1%81%D1%82%D0%B5%D0%BC_%D0%BB%D1%96%D0%BD%D1%96%D0%B9%D0%BD%D0%B8%D1%85_%D0%B0%D0%BB%D0%B3%D0%B5%D0%B1%D1%80%D0%B0%D1%97%D1%87%D0%BD%D0%B8%D1%85_%D1%80%D1%96%D0%B2%D0%BD%D1%8F%D0%BD%D1%8C

http://www.mathros.net.ua/vykorystannja-metodu-relaksacii-dlja-znahodzhennja-rozvjazku-slar.html

http://ukrefs.com.ua/page,2,132474-Iteracionnye-metody-resheniya-sistem-lineiynyh-algebraicheskih-uravneniiy.html

http://ukrefs.com.ua/page,4,131641-Metod-relaksacii-peremennyh-resheniya-SLAU.html

http://om.univ.kiev.ua/users_upload/15/upload/file/cm_lecture_10.pdf


http://www.cyberforum.ru/visual-cpp/thread133337.html
Программа выполнена в среде MS Visual C++ 2008 Express Edition.
#include <iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
 
using namespace std;
 
 int main()
{ setlocale(LC_CTYPE,"RUSSIAN");
 int n,i,j,k=0;
float eps;
float norma;
float w;
float A[10][10],B[10],x[10],xn[10];
            cout<<"Введите размерность матрицы N*N:";
            cin>>n;
            cout<<"Введите элементы матрицы: \n";
            for(i=0;i<n;i++)
            { 
               for(j=0;j<n;j++)
               {
                 cout<<"  A ["<<i+1<<"]["<<j+1<<"] = ";
                  cin>>A[i][j];
               }
            }
            cout<<"Введите свободные члены:\n";
            for(i=0;i<n;i++)
            { 
                cout<<"  B ["<<"|"<<i+1<<"|"<<"] = ";
                cin>>B[i];
            }
            cout<<("Введите точность:");
            cin>>eps;
            cout<<"Введите параметр релаксации w: ";
                cin>>w;
 
                    for(i=0;i<10;i++)
            {
            xn[i]=0;
            x[i]=xn[i];
            }
            do
            {  k++;
               norma=0;
             
               for(i=0;i<n;i++)
               {
                  x[i]=B[i];
                  for(j=0;j<n;j++)
                  {
                      if(i!=j)
                          x[i]=x[i]-A[i][j]*x[j];
                  }
                  x[i]/=A[i][i];
                  
                 x[i]=w*x[i]+(1-w)*xn[i];
                           
                  if(fabs(x[i]-xn[i]) > norma)
                      norma=fabs(x[i]-xn[i]);
                      xn[i]=x[i];
               }
            }
             while(norma > eps);
             cout<<"Кол-во итераций: ";cout<<k<<" \n";
             for(i=0;i<n;i++)
                 cout<<"x ["<<i+1<<"] = "<<x[i]<<"; ";
 
         getch();
         return 0;
  }






//идея метода релаксации заключаеться в том что на каждом шаге обращаеться в 
//нуль максимальный по модулю вектор начальных изменений путем изменения 
//значения соответствуйщей компоненты приблежения . Процесс заканчиваеться когdа
// все невязки последней преобразованной 
//системы будут равны нулю с заданой точностью 
 
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
//начало, параметры функции: матрица А, ее размерность n, число t, матрица C= t*A
int Mult(double **a, int n, double t, double **c)
{int i,j;
   for(i=0;i<n;i++)
for(j=0;j<n;c[i][j]=t*a[i][j],j++);
return 0;
}
//Сложение матриц, c=a+b 
int Sum(double **a, double **b,int n, double **c)
{int i,j;
   for(i=0;i<n;i++)
for(j=0;j<n;c[i][j]=a[i][j]+b[i][j],j++);
return 0;
} 
//Умножение матрицы a на вектор b, результат вектор - g=a*b.
int multV(double **a,double *b,int n,double *g)
{int i,j;
for(i=0;i<n;i++)
for(g[i]=0,j=0;j<n;g[i]=g[i]+a[i][j]*b[j],j++);
return 0;
}
//Умножение матрицы на матрицу, результат матрица c=a*b
int multM(double **a,double **b,int n,double **c)
{int i,j,k;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
for(c[i][j]=0,k=0;k<n;c[i][j]=c[i][j]+a[i][k]*b[k][j],k++);
return 0;
}
//Вычисление модуля вектора X - корень из суммы квадратов элементов массива.
double modul(double *X,int n)
{int i;double s;
for(s=0,i=0;i<n;s=s+X[i]*X[i],i++);
return sqrt(s);
}
//Решение СЛАУ A*x=b методом Гаусса для решения системы квадратных уровнений и
// обратной матрицы..b вектор правых частей
 
int SLAU(double **matrica_a, int n, double *massiv_b,double *x)
{
int i,j,k,r;
double c,M,max,s, **a, *b;
 
a=new double *[n];
for(i=0;i<n;i++) a[i]=new double[n];
b=new double [n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
a[i][j]=matrica_a[i][j];
for(i=0;i<n;i++)
b[i]=massiv_b[i];
for(k=0;k<n;k++)
{ max=fabs(a[k][k]);
r=k;
for(i=k+1;i<n;i++)
if (fabs(a[i][k])>max)
{ max=fabs(a[i][k]);
r=i;}
for(j=0;j<n;j++)
{ c=a[k][j];
a[k][j]=a[r][j];
a[r][j]=c; }
c=b[k]; b[k]=b[r]; b[r]=c;
for(i=k+1;i<n;i++)
{ for(M=a[i][k]/a[k][k],j=k;j<n;j++)//приведение матрицы к диагональному виду
a[i][j]-=M*a[k][j];
b[i]-=M*b[k];
}
}
if (a[n-1][n-1]==0)
if(b[n-1]==0) return -1;
else return -2;
else
{for(i=n-1;i>=0;i--)
{for(s=0,j=i+1;j<n;j++)
s+=a[i][j]*x[j];
x[i]=(b[i]-s)/a[i][i];
}
return 0; 
}
}
//Вычисление обратной матрицы y=a^(-1)
int INVERSE(double **a,int n,double **y)
{
int i,j,res;
double *b,*x;
b=new double [n];
x=new double [n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(j==i)
b[j]=1;
else b[j]=0;
res=SLAU(a,n,b,x);
if(res!=0)
break;
else
for(j=0;j<n;j++)
y[j][i]=x[j];
}
delete [] x;
delete [] b;
if (res!=0)
return -1;//проверка существования обратной матрицы
else return 0;
}
//Формирование из матрицы а верхнетреугольной матрицы u;
int VT (double **a,int n,double **u)
{ int i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i<j) u[i][j]=a[i][j];
else u[i][j]=0;
return 0;
}
//Формирование из матрицы а нижнетреугольной матрицы l      
int NT (double **a,int n,double **l)
{ int i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i>j) l[i][j]=a[i][j];
else l[i][j]=0;
return 0;
}
//Формирование из матрицы а диагональной матрицы d
int DM (double **a,int n,double **d)
{ int i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i==j) d[i][j]=a[i][j];
else d[i][j]=0;
return 0;
}
 
//Решение СЛАУ Au=f методом релаксации;Т параметр который свойстенен 
//для метода релаксации и применянться для быстроты сходимости
//u[k+1]=-(tL+D)^(-1)*(tU+(t-1)D)*u[k]+(tL+D)^(-1)*f
//L- нижнетреугольная
//U- верхнетреугольная
//D - диагональная
//A=L+D+U     
int main(int argc, char *argv[])
{int result, i,j,K=0,N,M;
double **TL,**A,*P,**L,**U,**D,T=1.6,*x0,*x1,*G,**Q,**W,**Q1,**Q2,**DT,**W1,
**TU,**Q3,*u,z,*v,eps=0.001;
//eps точность численного типа данных
//cout<<"N=";
//cin>>N;
ifstream f;
ofstream f1;
f.open("Dan.txt",ios::in);
f1.open("rez.txt",ios::out);
f>>N;//размерность системы(N=8)
A=new double *[N];
for(i=0;i<N;i++)
A[i]=new double[N];
 
Q=new double *[N];
for(i=0;i<N;i++)
Q[i]=new double[N];
 
Q2=new double *[N];
for(i=0;i<N;i++)
Q2[i]=new double[N];
 
Q3=new double *[N];
for(i=0;i<N;i++)
Q3[i]=new double[N];
 
W=new double *[N];
for(i=0;i<N;i++)
W[i]=new double[N];
 
W1=new double *[N];
for(i=0;i<N;i++)
W1[i]=new double[N];
 
Q1=new double *[N];
for(i=0;i<N;i++)
Q1[i]=new double[N];
 
L=new double *[N];
for(i=0;i<N;i++)
L[i]=new double[N];
 
U=new double*[N];
for(i=0;i<N;i++)
U[i]=new double[N];
 
TU=new double*[N];
for(i=0;i<N;i++)
TU[i]=new double[N];
 
TL=new double*[N];
for(i=0;i<N;i++)
TL[i]=new double[N];
 
D=new double *[N];
for(i=0;i<N;i++)
D[i]=new double[N];
 
DT=new double *[N];
for(i=0;i<N;i++)
DT[i]=new double[N];
 
P=new double[N];
u=new double[N];
v=new double[N];
x0=new double[N];
x1=new double[N];
G=new double[N];
 
for(i=0;i<N;i++)
for(j=0;j<N;j++)//считываю 8 строк из файла по 8 элемента (матирица А)
f>>A[i][j];
for(j=0;j<N;j++)//считываю последнюю строку из 8 элементов (вектор P)
f>>P[j];
f.close();
 
cout<<"Matrix A"<<endl;
for(i=0;i<N;cout<<endl,i++)
for(j=0;j<N;cout<<A[i][j]<<"\t",j++);
cout<<endl;
cout<<"Vector P"<<endl;
for(j=0;j<N;cout<<P[j]<<"\t",j++);
cout<<endl;
f1<<"Matrix A"<<endl;
for(i=0;i<N;f1<<endl,i++)
for(j=0;j<N;f1<<A[i][j]<<"\t",j++);
f1<<endl;
f1<<"Vector P"<<endl;
for(j=0;j<N;f1<<P[j]<<"\t",j++);
f1<<endl;
VT(A,N,U);//Формирование из матрицы А верхнетреугольной матрицы U
NT(A,N,L);//Формирование из матрицы А нижнетреугольной матрицы L
DM(A,N,D);//Формирование из матрицы А диагональной матрицы D
Mult(L,N,T,TL);//TL=T*L
Sum(D,TL,N,W);//W=D+TL
INVERSE (W,N,Q1);//Q1=W^(-1)=(D+TL)^(-1)
Mult(Q1,N,T,Q2);//Q2=T*Q1=T*(D+T*L)^(-1)
multV(Q2,P,N,G);//G=Q2*P=T*(T*L+D)^(-1)*P
Mult(Q1,N,-1,Q3);//Q3=-1*Q1=-1*(T*L+D)^(-1)
Mult(D,N,T-1,DT);//DT=(T-1)*D
Mult(U,N,T,TU);//TU=T*U
Sum(DT,TU,N,W1);//W1=DT+TU=((T-1)*D+T*U)
multM(Q3,W1,N,Q);//Q=U*W1=-(T*L+D)^(-1)*((T-1)*D+T*U)
for(i=0;i<N;x0[i]=P[i],i++);//x0=P
do
{
multV(Q,x0,N,u);//u=Q*x0
for(i=0;i<N;x1[i]=u[i]+G[i],i++);//x1=Q*x0+G
for(i=0;i<N;v[i]=fabs(x1[i]-x0[i]),i++);//v=|x1-x0|
for(i=0;i<N;x0[i]=x1[i],i++);//x0=x1
z=modul(v,N); //Модуль вектора - корень из суммы квадрвтов элементов вектора v:
              //модуль каждый раз изменял вектор х если модуль меньше 
              //предназначеной точности то метод прошел.
              //Для организации сходимости
              //modul<eps процесс закончен точность достигнута и в х1 решение 
K++; //Подсчет количества итераций
}
while(z>=eps);//Продолжать цикл, пока модуль вектора V больше заданной точности
cout<<"K="<<K<<endl; //Количество итераций
cout<<"Vector x1"<<endl; //Вектор - решение СЛАУ
//вывод на экрана
for(j=0;j<N;cout<<x1[j]<<"\t",j++);
cout<<endl;
//вывод в текстовый файл
f1<<"Vector X"<<endl;
for(j=0;j<N;f1<<x1[j]<<"\t",j++);
f1<<endl;
 
f1.close();
//
for(i=0;i<N;i++)
delete [] A[i];
delete [] A;
for(i=0;i<N;i++)
delete [] U[i];
delete [] U;
for(i=0;i<N;i++)
delete [] L[i];
delete [] L;
for(i=0;i<N;i++)
delete [] D[i];
delete [] D;
for(i=0;i<N;i++)
delete [] TL[i];
delete [] TL;
for(i=0;i<N;i++)
delete [] TU[i];
delete [] TU;
for(i=0;i<N;i++)
delete [] Q[i];
delete [] Q;
for(i=0;i<N;i++)
delete [] Q1[i];
delete [] Q1;
for(i=0;i<N;i++)
delete [] Q2[i];
delete [] Q2;
for(i=0;i<N;i++)
delete [] W[i];
delete [] W;
for(i=0;i<N;i++)
delete [] Q3[i];
delete [] Q3;
for(i=0;i<N;i++)
delete [] W1[i];
delete [] W1;
for(i=0;i<N;i++)
delete [] DT[i];
delete [] DT;
for(i=0;i<N;i++)
delete [] U[i];
delete [] U;
for(i=0;i<N;i++)
delete [] D[i];
delete [] D;
for(i=0;i<N;i++)
delete [] L[i];
delete [] L;
delete [] P;
delete [] u;
delete [] x1;
delete [] x0;
delete [] u;
delete [] v;
    system("PAUSE");
    return EXIT_SUCCESS;
}//вектор свободных коэфициэнтов переносим в лево.linsolve функция
// решает систему slau