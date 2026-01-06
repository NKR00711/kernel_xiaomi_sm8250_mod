#include <linux/kernel.h>

uintptr_t get_module_base(pid_t pid, char *name);
pid_t get_process_pid(char *comm);
