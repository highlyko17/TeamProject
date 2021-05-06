#include "attendance.h"

void listStudent(Student *s, int index) {
	printf("\n이름\t학번\t소속학부\t화요일 출석\t금요일 출석\t오프라인 출석 여부\n");
    printf("=======================================================\n");
    for(int i = 0; i < index; i++){
        if( s[i].studentID == -1) continue;
		printf("%d\t", i+1);
        readStudent(&s[i]);
    }
    printf("\n");
}

char selectStudent(Student *s, int index) {
	char name[20];
    listStudent(s, index);
    printf("이름은 (취소:0)?");
    scanf("%s", name);
    getchar();
    return *name;
}

int selectStudentID(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectDataNumber(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******출석부 명단 관리******\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 저장\n");
	printf("1. 조회\n");
	printf("1. 조회\n");
	printf("1. 조회\n");
}

int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {

}

void searchName(Student *s) {

}

void searchID(Student *s) {

}

