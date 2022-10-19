#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED

 #define NMAX 10
  void citire_matrice(int *n,int *m,double a[NMAX][NMAX]);
  void afisare(int n,int m,double a[NMAX][NMAX],char ch);
  void produs(int n,int m,int p,double a[NMAX][NMAX],
  double b[NMAX][NMAX],double c[NMAX][NMAX]);
  void invers(int n,double a[NMAX][NMAX],double eps,
  double b[NMAX][NMAX],double *det_a,int *err);


#endif // MATRICE_H_INCLUDED
