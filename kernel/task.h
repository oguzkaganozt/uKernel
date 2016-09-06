//===================================================================
#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED



#ifdef __cplusplus
extern "C" {
#endif

#define TASK_Num_MAX  30

typedef enum
{
    EMPTYTASK = 0,
    IDLETASK,
}
TASK_CONST;

typedef struct
{
    TASK_CONST    tasktype;
    uint8_t	offset;
    uint8_t	Buff[TASK_Num_MAX];
} TASK_Str;

//---------------------variable declare------------------------------
extern	TASK_Str	VTask;
//===================================================================
void	InitTaskQue( void );
uint8_t    PutTaskIntoQue_INT( TASK_CONST TaskID );
uint8_t    PutTaskIntoQue( TASK_CONST TaskID );
TASK_CONST    GetTaskFromQue( void );


#ifdef __cplusplus
}
#endif
