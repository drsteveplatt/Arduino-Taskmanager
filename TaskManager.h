#ifndef TASKMANAGER_H_INCLUDED
#define TASKMANAGER_H_INCLUDED

//#define TASKMANAGER_DEBUG
#include <TaskManagerCore.h>
TaskManager TaskMgr;
void loop() {
    TaskMgr.loop();
}
#endif // TASKMANAGER_H_INCLUDED


