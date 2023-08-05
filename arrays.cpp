#include<iostream>
using namespace std;

int main()
{
      const int SIZE =5;
      int numbers[SIZE];
      int sum=0;

      cout<<"enter five numbers: ";
      for (int i=0;i<SIZE;i++)
      {
        cin>>numbers[i];
      }
     for(int i=0;i<SIZE;++i)
     {
        sum+=numbers[i];
     }
      cout<<"sum of the numbers: "<<sum<<endl;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int number[5]= {1,2,3,4,5};
//     for (int i =0;i<5;++i)
//     {
//         cout<<" "<<number[i]<<" ";
//     }

//     cout<<endl;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int matrix[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     for (int i=0;i<3;++i)
//     {
//         for (int j=0;j<3;++j)
//         {cout<<matrix[i][j]<<" ";}
//         cout<<endl;
//     }

     
// }

