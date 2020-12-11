#include<iostream>
#include<math.h>
using namespace std;
int ap(int a, int n, int d)
{
    int sum = (n * (2 * a + (n - 1) * d)) / 2;
    return sum;
}
int gp(int a, int n, int r)
{
    int sum = (a * (1 - pow(r, n))) / (1- r);
    return sum;
}
int fact (int x)
{
    if(x==1)
    return 1;

else
    return x*fact(x-1);
}
int c ( int n, int r)
{
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long p( int n , int r)
{
	return( fact( n) / fact( n- r));

}
#define ORDER 2
int main()
{
    int choice;
    char op;
    cout<<" Numerical Analysis Problem Solving using cpp"<<endl;
    cout<<" ****************************************"<<endl;
    cout<<"  Introduction to the Project "<<endl;
     cout<<" Welcome to Numerical Analysis Problem Solving using cpp "<<endl;

        cout<<" This project include concepts of Mathematical Numerical analysis "<<endl;
        cout<<"*****************************************"<<endl;
        start:
        cout<<"**The choices are :**"<<endl;
        cout<<" 1. Arithmetic Progression"<<endl;
        cout<<" 2. Geometric Progression"<<endl;
        cout<<" 3. Taylor Series"<<endl;
        cout<<" 4. Tranpose of a matrix"<<endl;
        cout<<" 5. Determinant of a matrix"<<endl;
        cout<<" 6. Rank of a martix"<<endl;
        cout<<" 7. Singular matrix"<<endl;
        cout<<" 8. Symmetric matrix"<<endl;
        cout<<" 9.Permutations and Combinations"<<endl;
        cout<<" 10. Exit"<<endl;


    cout<<" Enter Your Choice..";
    cin>>choice;
    cout<<"*******************************************************"<<endl;
    switch(choice)
    {
    case 1:
            {


            int a, n, i,d,x,sum=0;
cout<<"\n Arithmetic Progression"<<endl;
cout<<" ******************************************************"<<endl;
cout<<"\n Enter First Number of an A.P Series:  ";
    cin>>a;
    cout<<"Enter the Total Elememts in this A.P Series:  ";
    cin>>n;
cout<<" Enter the Common Difference:";
cin>>d;
    cout<<"*******************************************************"<<endl;
    cout<<" Sum of arithmetic progression series =(n * (2 * a + (n - 1) * d)) / 2 "<<endl;
cout<<" *********************************************************"<<endl;
    sum = ap(a, n, d);
    cout<<" The Sum of Arithmetic Progression Series is ="<< sum<<endl;
    x = a;
    cout<<" A.P. Series : "<<endl;
    for(i = 0; i < n; i++)
    {
    cout<<x<<"\t";
        sum = sum + x;
        x = x + d;
    }
    cout<<"\n ";
cout<<"*******************************************************"<<endl;
            }
    break;
        case 2:
            {
                int a, n, r,x,i;
    float sum=0;
    cout<<"Geometric Progression "<<endl;
    cout<<" *************************************************"<<endl;
    cout<<" Enter First Number of an G.P Series:  ";
     cin>>a;
    cout<<" Enter the Total Number of Elements in this G.P Series:  ";
    cin>>n;
    cout<<" Enter the Common Ratio:  ";
    cin>>r;
cout<<"\n **************************************************"<<endl;
    cout<<"\n The sum of n terms in hp= a(r^n-1)/ (1- r)"<<endl;

    sum = gp(a, n, r);
    cout<<"\n ***************************************************"<<endl;
    cout<<"\n The Sum of Geometric Progression Series = "<< sum<<endl;

    x = a;
    cout<<"\n G.P Series  :  "<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<x<<"\t";
        sum = sum + x;
        x = x * r;
    }
    cout<<"\n";
    cout<<"\n *****************************************************"<<endl;
            }
    break;
        case 3:
 {int x,i;
float result=1;
cout<<"\n Taylor Series"<<endl;
cout<<"\n********************************************"<<endl;
cout<<"\n Taylor series is 1+x/1!+x^2/2!+x^3/3!...."<<endl;
cout<<"\n********************************************";
cout<<"\n Enter the value  ";
cin>>x;
for(i=1;i<=x;i++)
{
    result=result*(pow(x,i)/fact(i));
}
cout<<" \n The result is: "<<result<<endl;
cout<<"\n********************************************"<<endl;
 }
break;
        case 4:

            {
                int m, n, c, d, matrix[10][10], transpose[10][10];
   cout<<"\n Tranpose of the matrix"<<endl;
   cout<<"\n************************************************"<<endl;

   cout<<"\n Enter the number of rows and columns of matrix";
   cin>>m>>n;

   cout<<"\n Enter elements of the matrix"<<endl;

   for (c = 0; c < m; c++)
      for(d = 0; d < n; d++)

         cin>>matrix[c][d];

   for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = matrix[c][d];
cout<<"\n *****************************************************"<<endl;
cout<<"\n Matrix entered is:"<<endl;
cout<<"\n "<<endl;
for (c = 0; c < m; c++)
    {
      for(d = 0; d < n; d++)
         cout<< matrix[c][d]<<"\t ";
         cout<<" \n ";
}
   cout<<"\n Transpose of the matrix:"<<endl;

   for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++)
         cout<< transpose[c][d]<<"\t ";
      cout<<" \n ";
   }
cout<<"\n ****************************************************"<<endl;
            }
   break;
        case 5:

            {
	int a[3][3],i,j,k,sum,p;
	cout<<"Determinant of a matrix"<<endl;
	cout<<"********************************************"<<endl;
	cout<<"\n Enter the value for a 3*3 matrix: ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	sum=0;
	j=1;
	k=2;
	for(i=0;i<=2;i++)
	{
		p=pow(-1,i);
		if(i==2)
			k=1;
		sum=sum+(a[0][i]*(a[1][j]*a[2][k]-a[2][j]*a[1][k])*p);
		j=0;
	}
cout<<"\n Detreminant of given matrix  " << sum<<endl;
cout<<"********************************************************"<<endl;
}
break;
case 6:
    {
        cout<<"Rank of a matrix"<<endl;
        cout<<"***************************************************"<<endl;
int i, j, n = ORDER, det, matrix[2][2];


        cout<<"Enter the  matrix (of order 2*2) :";
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        cin>>matrix[i][j];
                }
        }
        det = (matrix[0][0] * matrix[1][1]) -
                (matrix[0][1] * matrix[1][0]);


        if (det==0) {
                cout<<"Rank of the given matrix is 1!!"<<endl;
        } else {
                cout<<"Rank of the given matrix is 2!!\n"<<endl;
        }
}
cout<<"*******************************************************"<<endl;
break;
case 7:
    {
        int a[3][3],i,j,k,sum,p;
        cout<<"Singular Matrix"<<endl;
        cout<<"********************************************************";
cout<<"\n Enter the value for a 3*3 matrix: ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	sum=0;
	j=1;
	k=2;
	for(i=0;i<=2;i++)
	{
		p=pow(-1,i);
		if(i==2)
			k=1;
		sum=sum+(a[0][i]*(a[1][j]*a[2][k]-a[2][j]*a[1][k])*p);
		j=0;
	}

	cout<<"A Matrix is Singular if its Determinant=0"<<endl;
	cout<<"****************************************************************"<<endl;
	cout<<"Determinant of the given matrix is  "<<sum<<endl;
	if(sum==0)
    {
        cout<<"It is a singular matrix"<<endl;
    }
    else
    {

        cout<<"Not a Singular Matrix"<<endl;
    }
    }
    cout<<"******************************************************"<<endl;
    break;
case 8:
    {
        cout<<"Symmetric Matrix"<<endl;
        cout<<"****************************************************"<<endl;
        int a[3][3],s,i,j,f=1;
        cout<<"Enter matrix(3*3):";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				f=0;
				break;
			}
		}
	}
		if(f==1)
			cout<<"It is Symmetric"<<endl;
		else
		{
			cout<<"Not a Symmetric matrix"<<endl;
}		}


    cout<<"**********************************************************"<<endl;

    break;
case 9:
            {
                int n , r, c( int n , int r);
	long p( int n , int r);
	long double facto( int);
	cout<<"\n Permutations and Combinations"<<endl;
	cout<<"\n *************************************************"<<endl;

cout<<"\n Enter value of n & r: "<<"\n"<<" (given that n>r ) ";
	cin>>n>>r;
	if( n>= r) {
		cout<<"\n"<<"C is"<<n <<"C"<<r <<"\t"<<c( n , r)<<endl;

		cout<<"P is"<<n <<"P"<<r <<"\t"<<p(n,r)<<endl;
		cout<<" *************************************************"<<endl;
	} else {
		cout<<"\n Invalid Value"<<endl;
		cout<<"\n *************************************************"<<endl;
	}
    }
    break;

    default:
        {

        cout<<"\n Invalid Choice"<<endl;
        cout<<"\n *************************************************"<<endl;
        break;
        }

}        cout<<" Do you want to continue ..??..(Y / N)";
        cin>>op;
        if(op=='y'||op=='Y')
            goto start;
        return 0;
}



