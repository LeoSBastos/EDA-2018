#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BibListaDup.h"

void main(){
  int i;
  Venda* v = lst_cria(v);
  for(i=3;i>0;i--){
    v = lst_cadastro(v,i,(char)i,i*2,i*100);
  }
  lst_lista(v);
  lst_venda(v);
}
