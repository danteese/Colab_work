#include "libraries.h"
extern void _lista1( void );
extern void _lista2( void );
extern void _lista3( void );
void help( void );

int main( int argc, char **argv ){
  int cmp[3];
  if ( argc == 1) {
    help();
  }
  else if ( argc == 2 ) {
    cmp[0] = strcmp( argv[1], "-1");
    cmp[1] = strcmp( argv[1], "-2");
    cmp[2] = strcmp( argv[1], "-3");
    if ( cmp[0] == 0 ) {
      //pares
      _lista1();
    }
    else if ( cmp[1] == 0  ) {
      //primos
      _lista2();
    }
    else if( cmp[2] == 0 ){
      //multiplo de 10
      _lista3();
    }
    else{
      printf("No existe tal lista.\n");
      help();
    }
  }
  else {
    printf("No existe tal accion en el programa. \n");
    help();
  }
}

void help( void ){
  printf("\n AYUDA \n");
  printf("\nNo se selecciono la lista a desplegar\n");
  printf("Lista -n\tDonde n es el tipo de lista:\n");
  printf("\n[+] 1 : Lista pares\n");
  printf("[+] 2 : Lista primos\n");
  printf("[+] 3 : Lista multiplos de 10\n");
  printf("\n[Enter para salir] ");
  getchar();
  printf("\n");
  exit(1)
}
