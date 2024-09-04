#include <stdio.h>
#include <stdlib.h>
//criação do tipo estruturado
//Estrutura de controle
typedef struct input_output{
	//legenda: salvo->10,excluído->20,alterado->30
	
	int status;
	int records;
	int nid;
}T_IO;
//Estrutura de dados (registro)
typedef struct record{
	int id;
	char name[40];
	float pay;
}Trecord;
//Estrutura de dados (arquivo)
typedef struct file{
	T_IO header;
	Trecord File [10];
}Tfile;
int main(){
	Tfile agenda;
	Trecord registro; 
	int cmenu,i=0;
	
	//menu
	do{
		printf("1 - Cadastrar\n2 - Alterar\n3 - Buscar\n4 - Apagar\n5 - Recuperar\n6 - Listar\n7 - Encerrar\n");
		printf("-->");
		scanf("%d",&cmenu);
		switch(cmenu){
			case 1:
				system("cls");
				registro.id=agenda.header.nid;
				printf("ID.....: %d\n",registro.id);
				printf("Nome...:");
				scanf(" %[^\n]s",registro.name);
				printf("Salário:");
				scanf("%f",&registro.pay);
				printf("Salvar registro?(0 - não,1 - sim):");
				scanf("%d",&cmenu);
				if(cmenu){
					agenda.File[agenda.header.records]=registro;
					agenda.header.nid++;
					agenda.header.status=10;
					agenda.header.records++;
				}
			break;
			case 6:
				system("clear");
				for(i=0;i<agenda.header.records;i++){
					printf("ID.....:%d\n",agenda.File[i].id);
					printf("Name...:%s\n",agenda.File[i].name);
					printf("Salario:%f\n",agenda.File[i].pay);
				}
				printf("\nControles:\n");
				printf("nid:%d\n",agenda.header.nid);
				printf("status:%d\n",agenda.header.status);
				printf("records:%d\n",agenda.header.records);
				getchar();
			break;
		}
	}while(cmenu!=7);
	return 0;
}
