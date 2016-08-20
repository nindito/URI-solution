#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char p[80],p2[80],p3[80];
    cin>>p>>p2>>p3;
    if(!strcmp(p, "vertebrado")){
                      if(!strcmp(p2, "ave")){
                               if(!strcmp(p3, "carnivoro")){
                                                  cout << "aguia\n";
                               }
                               if(!strcmp(p3, "onivoro")){
                                                  cout << "pomba\n";
                               }
                      }
                      if(!strcmp(p2, "mamifero")){
                               if(!strcmp(p3, "onivoro")){
                                                  cout << "homem\n";
                               }
                               if(!strcmp(p3, "herbivoro")){
                                                  cout << "vaca\n";
                               }
                      }
    }

    if(!strcmp(p, "invertebrado")){
                      if(!strcmp(p2, "inseto")){
                               if(!strcmp(p3, "hematofago")){
                                                  cout << "pulga\n";
                               }
                               if(!strcmp(p3, "herbivoro")){
                                                  cout << "lagarta\n";
                               }
                      }
                      if(!strcmp(p2, "anelideo")){
                               if(!strcmp(p3, "hematofago")){
                                                  cout << "sanguessuga\n";
                               }
                               if(!strcmp(p3, "onivoro")){
                                                  cout << "minhoca\n";
                               }
                      }
    }
    return 0;
}

