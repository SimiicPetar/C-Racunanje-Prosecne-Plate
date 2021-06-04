#include <iostream>

using namespace std;

int main()
{
int N=0;
cin>>N;
int plata[N];
plata[N]={0};
for(int i = 0;i < N;i++){
	cin>>plata[i];
}
int zbir=0;

for(int i = 0;i < N; i++){
	zbir=plata[i] + zbir;
}
int prosek;
prosek=zbir/N;
cout<<"Prosecna plata je "<<prosek<<" dinara.";
}
