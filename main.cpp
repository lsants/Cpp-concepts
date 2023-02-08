
#include <iostream>                             // déclarations des fonctions d'E/S
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int isEven(int &n){
    if (n % 2 == 0){
        std::cout << "Pair" << std::endl;
    }
    else{
        std::cout << "Impair" << std::endl;
    }
    return 0;
}
int somme(int,int);
void permutation_p(int*,int*);
void permutation_r(int&,int&);

int main()                                      // fonction principale (main)
{
// Séquence 1 :
    /*
    int n;
    std::cout << "Entrez le numero : " << std::endl;
    std::cin >> n;

    isEven(n);
    return 0;
    */

// Séquence 2 :
    /*
    int n;
    cout << "Entrez le numero : " <<endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout<<"Numero : " << i<< " ";
        cout<<"Carre : " << i*i<< " ";
        cout<<"Racine : " << sqrt(i)<< endl;
    }
    return 0;
    */

// Séquence 3 :
    /*
    int maxi,mini=1e9,i,j;
    cout<< "Entrez une serie d'entiers quelconques au clavier"<<endl;
    cout<< "Tapez CTRL_Z suivi de <Entree> pour terminer"<<endl;
    while(cin)
    {
        cin>>i;
        j = i;
        if(cin)
        {
            if(i>maxi) maxi=i;
            cout<<"max provisoire : "<<maxi<<endl;

            if (j<mini) mini=j;
            cout<<"min provisoire : "<<mini<<endl;
        }
    }
    cout<<"Maximum : "<<maxi<<endl;
    cout<<"Minimum : "<<mini<<endl;
    cout<<"Moyenne : "<<(maxi+mini)/2.0 <<endl;
    */

// Séquence 4 :
    /*
    int x=1,i;
    double s=0,m=0,v=0;
    vector<int> t;
    while(cin)
    {
        cout<<"Valeur suivante : ";
        cin>>x;
        if (!cin)
            goto endloop;
        t.push_back(x);
        s+=x;
        m=s/t.size();
    }
    endloop:
    for(i=0;i<t.size();i++)
    {
        v+=(t[i]-m)*(t[i]-m);
    }

    cout<<"Sum: "<<s;
    cout<<" Mean: "<<m;
    cout<<" Variance: "<<v <<endl;
    */

// Séquence 5 :
    /*
    int x,y;
    cout<<" Donner la valeur de x : ";
    cin>>x;
    cout<<" Donner la valeur de y : ";
    cin>>y;

    cout<< "Valeurs de x et y :" << endl;
    cout<< "x = " <<x<< endl;
    cout<< "y = " <<y<< endl;

    int s = somme(x,y);
    cout<< "Valeur de " << x << " + " << y << ": " << s << endl;

    int *px,*py;
    px = &x;
    py = &y;
    permutation_p(px,py);
    cout<<" Valeur de x et y apres permutation : " << endl;
    cout<< "x = " <<x<<endl;
    cout<< "y = " <<y<<endl;

    permutation_r(x,y);
    cout<<"Valeurs de x et y apres nouvelle permutation : " <<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl; */

// Séquence 6 :
    int *p1;
    int x,i,n,*t,temp;

    cout<< "Donner la taille du tableau : ";
    cin>> n;
    t = new int[n]; // Allocation dynamique d'un tableau à n valeurs entières
    for(int i=0; i<n; i++)
    {
        cout<< "Donner la valeur de t["<<i<<"]: ";
        cin >> t[i]; // Remplissage du tableu par l'utilisateur
    }

    cout<<"Valeurs du tableau :"<< endl;
    for(int i=0;i<n;i++)
    {
        cout<<"t["<<i<<"] = "<<t[i]<<endl; // Affichage du tableau
    }

    for(i=0;i<n-1;i++)
    {   p1=t;
        while(p1<t+n-1)
        {
            if(*p1>*(p1+1))
            {
                temp = *p1;
                *p1 = *(p1+1);
                *(p1+1) = temp;
            }
            p1++;
        }
    }

    cout<<"Tableau trie :"<<endl;
    for(i=0,p1=t;p1<t+n;p1++,i++)
    {
        cout<<"t["<<i<<"] = "<< *p1<< endl;
    }

    return 0;
}


int somme(int a, int b){ // passage d'arguments par copie
    return a + b;
}

void permutation_p(int* a, int *b) // passage d'arguments par adresse
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permutation_r(int &a, int &b) //passage d'arguments par rédefence
{
    int temp = a;
    a = b;
    b = temp;
}
