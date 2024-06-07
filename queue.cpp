/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max 5
using namespace  std;
typedef struct{
    int count;
    int front;
    int rear;
    int item[max];
}Queue;
Queue antrian;
void inisialisasi(Queue *q)
{
    q->count =0;
    q->front=0;
    q->rear = 0;
}
int isempty(Queue *q)
{
    int hasil = 0;
    if(q->count ==0)
    {
       hasil = 1;
    }
    return hasil;
}
int isfull(Queue *q)
{
    int hasil = 0;
    if(q->count == max)
    {
       hasil = 1;
    }
    return hasil;
}

void insert(Queue *q ,int data)
{
    if(isfull(q))
    {
        cout<<"penuh"<<endl;
    }else
    {
        int input;
        cin>>input;
        data = input;
        q->item[q->rear] = data;
        q->rear = (q->rear+1)%max;
        q->count ++;
    }
}

void hapus(Queue *q )
{
    if(isempty(q))
    {
        cout<<"kosong"<<endl;
    }else
    {
     
        q->front = (q->rear+1)%max;
        q->count --;
    }
}
void cetak(Queue *q )
{
    if(isempty(q))
    {
        cout<<"kosong"<<endl;
    }else
    {
     for(int i = 0; i<q->count;i++)
     {
         cout<<"isi antrian:";
         cout<<q->item[i];
         cout<<endl;
     }
     
    }
}

int main()
{
    inisialisasi(&antrian);
    int a = 10;
    insert(&antrian,a);
    insert(&antrian,a);
    insert(&antrian,a);
    insert(&antrian,a);
    cetak(&antrian);
    cout<<endl;
    hapus(&antrian);
    cetak(&antrian);
    insert(&antrian,a);
    cetak(&antrian);
  
    
  
    return 0;
}
