#include <stdio.h>
#include <time.h>
void le_dados(int &mn, int &an, int &dn, float &vp, float &ve, int &qtm){
  bool vrf=true;
  while(vrf){
     printf("Mes do nascimento: ");
     scanf("%d",&mn);
  if (mn>0 && mn<13){
vrf=false;
}
  else{
puts("Erro");
  }
}

vrf=true;

while(vrf){
  printf("Ano do nascimento: ");
  scanf("%d",&an);
  if (an>1900 && an<2020){
vrf=false;
}
  else{
    puts("Erro");
  }
}

vrf=true;
while(vrf){
  printf("Dia do nascimento: ");
  scanf("%d",&dn);
  if (dn>0 && dn<=29 && mn==2 && (an%100)%4==0){
    vrf=false;
  }
   else if(dn>0 && dn<=28 && mn==2 && (an%100)%4!=0){
vrf=false;
   }
   else if(dn>0 && dn<31 && mn%2==0 && mn!=2){
vrf=false;
   }
   else if(dn>0 && dn<32 && mn%2!=0 && mn!=2){
vrf=false;
   }
  else{
    puts("Erro");
  }
}

vrf=true;
while(vrf){
  printf("Valor do patrimônio: ");
  scanf("%f",&vp);
  if (vp>0){
vrf=false;
}
  else{
    puts("Erro");
  }
}
vrf=true;
while(vrf){
  printf("valor do empréstimo: ");
  scanf("%f",&ve);
  if (ve>0){
vrf=false;
}
  else{
    puts("Erro");
  }
}
while(vrf){
  printf("Quantidade de meses: ");
  scanf("%d",&dn);
  if (qtm>0){
vrf=false;
}
  else{
    puts("Erro");
  }
}  
}
void data_atual(int &dia, int &mes, int &ano) {
time_t t = time(NULL);
struct tm lt = *localtime(&t);
ano = lt.tm_year + 1900;
mes = lt.tm_mon + 1;
dia = lt.tm_mday;
}
void calcula_idade(int dn,int mn,int an, int &id){
int da, ma, aa;
data_atual(da,ma,aa);
if (dn-da<0){
 if(mn-(ma+1)>=0){
  id--;
}
}
else{
if (mn-ma>=0){
  id--;
}
}
id+=aa-an;
}
int main(){
 int mn,an,dn, qtm,id=0;
float vp, ve;
le_dados(mn,an,dn,vp, ve,qtm);
calcula_idade(dn,mn,an,id);
printf("%d",id);
}


