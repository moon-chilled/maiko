#ifdef DOS
int make_old_version(char *old, char *file);
#endif
#ifdef FSDEBUG
void print_finfo(FINFO *fp);
#endif
int init_finfo();
LispPTR COM_gen_files(register LispPTR *args);
LispPTR COM_next_file(register LispPTR *args);
LispPTR COM_finish_finfo(register LispPTR *args);
