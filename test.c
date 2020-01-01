t_elem*critere_supp_all1(t_elem*prem,int val)
{
  t_elem*n,*sup,*prec;
  // supprimer au début
  while(prem!=NULL && prem->val==val){
    sup=prem;
    prem=prem->suiv;
    free(sup);
Implémenter une liste simple en dynamique 15
liste 2 20 20 20 20 NULL
premier=premier->suiv
premier=premier->suiv
premier=premier->suiv
premier=premier->suiv
premier vaut NULL
20 20 7 20 20 55 32 25 20 NULL liste 1
premier
prec n
  }
  // les suivants
  if (prem!=NULL){
    prec=prem;
    n=prem->suiv;
    while (n!=NULL){
      while(n!=NULL && n->val==val){
	sup=n;
	n=n->suiv;
	prec->suiv=n;
	free(sup);
      }
      if (n!=NULL){
	prec=n;
	n=n->suiv;
      }
    }
  }
  return prem;
}
