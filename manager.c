#include "attendance.h"

void listStudent(Student *s, int index) {
	printf("\n\t?΄λ¦?\t?λ²?\t\t???λΆ?   ???Ό μΆμ  κΈμ?Ό μΆμ  ?€??Ό?Έ μΆμ ?¬λΆ?\n");
    printf("===================================================================================\n");
    for(int i = 0; i < index; i++){
        if( s[i].studentID == -1) continue;
		printf("%d\t", i+1);
        readStudent(&s[i]);
        printf("\n");
    }
}

int selectStudent(Student *s, int index) {
	char name[20];
    int i = 0;
    listStudent(s, index);
    printf("ΐΜΈ§ΐΊ? ");
    scanf("%s", name);
    getchar();
    for(i = 0 ; i < index ; i++) {
        if(strcmp(name,s[i].name) == 0)
            return i;
    }
    return -1;
}

int selectStudentID(Student *s, int index) {
	int no;
    int i = 0;
    listStudent(s, index);
    printf("ΗΠΉψΐΊ? ");
    scanf("%d",&no);
    getchar();
    for(i = 0 ; i < index ; i++) {
        if(s[i].studentID == no)
            return i;
    }
    return -1;
}

int selectDataNumber(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("λ²νΈ? (μ·¨μ:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******μΆμλΆ? λͺλ¨ κ΄?λ¦?******\n");
	printf("1. μ‘°ν\n");
	printf("2. μΆκ??\n");
	printf("3. ?? \n");
	printf("4. ?­? \n");
	printf("5. ????₯\n");
	printf("0. μ’λ£\n");
    printf("=? ??? λ©λ΄??: ");
    scanf("%d", &menu);

    return menu;
}


int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {
    printf("?±? ? ?? ₯??Έ?: ");
    scanf("%c", &s->grade);
    printf("=>?±?  ?? ₯ ?λ£?\n");
}

void searchName(Student *s) {

}

void searchID(Student *s) {

}

