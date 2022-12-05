# Proiect Sincretic(Project 299)
1.Motivarea proiectului:
Am ales acest proiect,deoarece am considerat ca este o provocare.
2.Detalii de implementare:
Pentru inceput,am scris bibliotecile de care avem nevoie.
Am initializat global matricea[10][20].
Am creat urmatoarele functii: citire,afisare,suma,minMax.
Fiecare functie are ca parametrii "int n,int m", care semnifica numarul de linii si de coloane.
In functia "void citire",folosim srand(time(NULL)),deoarece trebuie sa avem o matrice generata aleatoriu.
Folsim r=rand()%20 pt ca matricea sa aiba valori pana in 20.
In functia "void suma",am initializat sumaDP=0,acesta fiind suma elementelor de pe diagonala principala si sumaDS=0,fiind suma elementelor de pe diagonala secundara.
Am folosit conditia pentru diagonala principala (i==j) si conditia pentru diagonala secundara(i+j==n-1).
In functia "void minMax",am initializat minimul si maximul cu 2 valori aleatoare.
Pentru a calcula minimul elementelor de sub diagonala principala,am folosit 2 conditii:"if(i>j)" si "if(matrice[i][j]<min)".
Pentru a calcula maximul elementelor de sub diagonala secundara,am folosit 2 conditii:"if(i+j>n-1)" si"if(matrice[i][j]>max)".
In urmatoarea functie,am creat meniul.
In "int main",am scris functia "meniu();".
3.Mediul de dezvoltare:
Am implementat codul in Visual Studio,folosind limbajul C.
4.Exemple de rulare:
[image](https://user-images.githubusercontent.com/119864658/205659432-7f86706a-8ec8-4427-ae85-49fd8e1aed89.png)
5.Bibliografie:
https://www.math.uaic.ro/~eduard/L08.Programare_C.pdf
https://www.pbinfo.ro/articole/5626/tablouri-patratice
