#include <stdio.h>

typedef struct _cq_projects 	cq_projects;
typedef struct _cq_crons    	   cq_crons;
typedef struct _cq_cron_cmd 	cq_cron_cmd;

typedef struct _cq_queues   	  cq_queues;
typedef struct _cq_queue_cmd   cq_queue_cmd;


struct _cq_projects
{
	char 		  *name;
	cq_crons 	 *crons;
	cq_queues 	*queues;
};


struct _cq_crons
{
	char  		*name;
	cq_cron_cmd  *cmd;
	cq_crons    *prev;
	cq_crons    *next;
};

struct _cq_cron_cmd
{
	int min; 	//0-59
	int hour; 	//0-23
	int day;	//1-31
	int month;	//1-12
	int week;	//0-6
};

struct _cq_queues {
	char 		 *name;
	cq_queue_cmd  *cmd;
	cq_queues    *prev;
	cq_queues    *next;
};

struct _cq_queue_cmd {
	char *name;
	
};
