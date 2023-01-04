#include <iostream>
using namespace std;


void LectureTab(int Tab[], int n)
	{
        int i;
	
	    for(i=0;i<n;i++)
		    {
		    cout<<" Veuillez saisir la valeur numéro : \n"<< i+1;
		    cin>>Tab[i];
		    }}

void minTab(Tab[], int n)
	{ int i;
	
	minN = Tab[0];
	indice_minN = 0;
	
	for(i=1;i<n;i)
	{ 
		if (minN > Tab[i]) {
			minN = Tab[i];
			indice_minN = i;
		}
	}
    cout<<"\n le minimum est : "<< minN <<"et sa place dans la case : "<< indice_minN + 1 ;
    return  minN;
    }

void maxTab(int Tab[], int n)
    { int i;
		
	maxN = Tab[0];
	indice_maxN = 0;
		
	for(i=1;i<n;i)
	{ 
		if (maxN < Tab[i]) {
			maxN = Tab[i];
			indice_maxN = i;
		}
	}
        cout<<"\n le maximum est : "<< maxN <<"et sa place dans la case : "<< indice_maxN + 1 ;
return  maxN;
}

void permuteMinMaxTab(int *x, int *y){j
int temp;
temp = *x;
*x = *y;
*y = temp *x;	}

void afficheTab();
    int i;
	cout<<"Les éléments du tableau sont : ";
	for (i=0;i<20;i++){
		cout<<Tab[i]; 

	}
	

int main() 
{
int T[100];
int N; temp; m; M:

do 
    cout<<"Entrez N \n ",return
    while (N>100)
Lecture(A, N)
Cout("les ellements du tableau sont : \n");
afficheTab(A,N)
m = minTab(A,N);
M = maxTab(A,N);
permuteMinMaxTab(maxV, minV);

	
	
	
return 0;
}
