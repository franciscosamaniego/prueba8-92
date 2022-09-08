#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  printf("1)Ver notas\n");
  printf("2)Agregar notas\n");
  printf("3)Borrar notas\n");
  printf("4)Salir\n");
}

void see_menu() {
  system("clear");
  FILE *fp;
  fp = fopen("notas.txt", "r");
  int c;
  printf("--------Notas-------\n");
  while((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("--------Fin-------\n");
  fclose(fp);
}

void write_menu() {
  system("clear");
  FILE *fp;
  char notas[100] = " ";
  int c = getchar();
  printf("Que queres anotar?\n");
  fp = fopen("notas.txt", "a");
  fgets(notas, 100, stdin);
  fprintf(fp, "%s", notas);
  fclose(fp);
}

void delete_menu(){
  system("clear");
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
}

int main(int argc, char *argv[]) {
  printf("Bienvenido al menu\n");
  int choice;
  while(1) {
    print_menu();
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        see_menu();
        break;
      case 2:
        write_menu();
        break;
      case 3:
        delete_menu();
        break;
      case 4:
        system("clear");
        exit(0);
      default:
      printf("Elija una opcion valida\n");
      break;
    }
  }
  return 0;
}
