#ifndef _MAILLIST_H
#define _MAILLIST_H

#define PERSPACE 100

enum{
	ADD_MSG = 1,
	DELETE_MSG,
	SEARCH_MSG,
	CHANGE_MSG,
	DISPLAY_MSG,
	EMPTY_MSG
};

struct MailList{
	char name[50];
	char gender;
	char telnum[30];
	char addr[200];
	int age;
};

typedef struct{
	struct MailList* allMsg;
	int count;
	int limit;
}MailLists;

void inputData(struct MailList* oneData);

void outputData(MailLists data);
void outputSearchData(MailLists data, int* outputdata);
void searchData(MailLists data, char* find, int* searchres);

int catchOneData(MailLists data, char* find);

void deleteOneData(MailLists* data, int n);
void addMailList(MailLists* data, struct MailList oneData);
void destoryMailList(MailLists* data);
void initMailList(MailLists* data);


#endif