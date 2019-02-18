# 1 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c"
# 1 "D:\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "D:\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "D:\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "D:\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "D:\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "D:\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "D:\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "D:\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "D:\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "D:\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "D:\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "D:\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "D:\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "D:\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "D:\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "D:\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "D:\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "D:\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "D:\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "D:\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "D:\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "D:\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

# 1 "D:\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "D:\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "D:\\HPE\\LoadRunner\\include/as_web.h"


# 802 "D:\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "D:\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "D:\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "D:\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_add_cookie("course=clanguage; DOMAIN=www.scholat.com");

	web_url("www.scholat.com", 
		"URL=http://www.scholat.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/portal_new/images/course.png", "ENDITEM", 
		"Url=/portal_new/images/Invite.png", "ENDITEM", 
		"Url=/portal_new/images/team.png", "ENDITEM", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(9);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t2.inf", 
		"LAST");

	lr_start_transaction("Login");

	web_submit_form("Auth.html", 
		"Snapshot=t3.inf", 
		"ITEMDATA", 
		"Name=j_username", "Value=lqlz", "ENDITEM", 
		"Name=j_password_ext", "Value=1183285704ll", "ENDITEM", 
		"Name=j_passdec", "Value=72308B68B8B911983C3DA559ED6A1A8BF90C59E1FF370157", "ENDITEM", 
		"LAST");

	web_url("AuthCookie.html", 
		"URL=http://www.scholat.com/AuthCookie.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/common/layer/skin/layer.css", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/common/layer/skin/default/xubox_ico0.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/images/space/headbg.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/template/homepage/bgimages/29.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/course/layer/skin/layer.css", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/course/layer/skin/layer.ext.css", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/calendar/imgs/calendar-icon.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/calendar/images/noMsg.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/ext-2.0.2/resources/images/default/qtip/tip-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/ext-2.0.2/resources/images/default/qtip/tip-anchor-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/chatjs/swf/soundmanager2.swf", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/chatjs/icons/tonline.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/ext-2.0.2/resources/images/default/panel/tool-sprites.gif", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=//chatjs/icons/online-avatar.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/resources/s_icon/huangzhihao_1444124176867.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/ext-2.0.2/resources/images/default/tree/leaf.gif", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/chatjs/icons/team.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/calendar/images/remind.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/images/homepage/addfriend.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/resources/s_icon/chenjingfen_1434872125499.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/resources/s_icon/guobanghong_1527731669788.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/resources/s_icon/mozhaoxian_1444843385058.jpg", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"Url=/images/default.png", "Referer=http://www.scholat.com/Phomepage.html", "ENDITEM", 
		"LAST");

	web_custom_request("SharePatent_ajax.html", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("emailM-getUnreadCount_ajax.html", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("calendarCourse-getTodayCourse_ajax.html", 
		"URL=http://www.scholat.com/calendarCourse-getTodayCourse_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getDynamicMessagesMobile_ajax.html", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getAllAddFriendsMsg_ajax.html", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("mobileCalendarShare_ajax.html", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("AllScholarShare_ajax.html", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ScholarUserType_ajax.html", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ChatMng.update.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=A4418185C2A1E52D2513C482A418D4F423\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:Yj\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=1\n", 
		"LAST");

	web_submit_data("FriendTreeActionForChat.html", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-12", "ENDITEM", 
		"LAST");

	web_submit_data("TeamTreeActionForChat.html", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-14", "ENDITEM", 
		"LAST");

	web_submit_data("RecentTreeActionForChat.html", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-13", "ENDITEM", 
		"LAST");

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("CalendarAjaxService.getRemindCalendars.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/CalendarAjaxService.getRemindCalendars.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=A4418185C2A1E52D2513C482A418D4F423\nc0-scriptName=CalendarAjaxService\nc0-methodName=getRemindCalendars\nc0-id=0\nbatchId=0\n", 
		"LAST");

	web_custom_request("recommendFriendsByJs_ajax.html", 
		"URL=http://www.scholat.com/recommendFriendsByJs_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getLatestVisitors.html", 
		"URL=http://www.scholat.com/getLatestVisitors.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	lr_end_transaction("Login",2);

	lr_think_time(42);

	web_url("addPostMessage.html", 
		"URL=http://www.scholat.com/addPostMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("addPostMessage.html_2", 
		"URL=http://www.scholat.com/addPostMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/common/ueditor1_3_6/themes/default/css/ueditor.css", "ENDITEM", 
		"Url=/common/ueditor1_3_6/themes/default/images/icons.gif", "ENDITEM", 
		"Url=/common/ueditor1_3_6/themes/default/images/icons.png", "ENDITEM", 
		"Url=/common/ueditor1_3_6/themes/iframe.css", "ENDITEM", 
		"Url=/common/ueditor1_3_6/themes/default/images/scale.png", "ENDITEM", 
		"LAST");

	web_custom_request("AllScholarShare_ajax.html_2", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("mobileCalendarShare_ajax.html_2", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getAllAddFriendsMsg_ajax.html_2", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ScholarUserType_ajax.html_2", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("SharePatent_ajax.html_2", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("emailM-getUnreadCount_ajax.html_2", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ChatMng.update.dwr_2", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/addPostMessage.html\nhttpSessionId=\nscriptSessionId=6D374C29FD8103ED0445E295F95E1B04946\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:CI\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=0\n", 
		"LAST");

	web_submit_data("TeamTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-14", "ENDITEM", 
		"LAST");

	web_submit_data("RecentTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-13", "ENDITEM", 
		"LAST");

	web_submit_data("FriendTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-12", "ENDITEM", 
		"LAST");

	web_custom_request("getDynamicMessagesMobile_ajax.html_2", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html_2", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("checkLimitCondition.html", 
		"URL=http://www.scholat.com/checkLimitCondition.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("checkMobileApplyInfo_ajax.html", 
		"URL=http://www.scholat.com//checkMobileApplyInfo_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("title=1; DOMAIN=www.scholat.com");

	lr_think_time(5);

	web_custom_request("showteamworkListByUsername.html", 
		"URL=http://www.scholat.com/showteamworkListByUsername.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"LAST");

	web_custom_request("showteamworkListByUsername.html_2", 
		"URL=http://www.scholat.com/showteamworkListByUsername.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"LAST");

	return 0;
}
# 4 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

# 1 "Action.c" 1
Action()
{

	lr_think_time(17);

	lr_start_transaction("fabudongtai");

	web_custom_request("ChatMng.logout.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.logout.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/addPostMessage.html\nhttpSessionId=\nscriptSessionId=6D374C29FD8103ED0445E295F95E1B04946\nc0-scriptName=ChatMng\nc0-methodName=logout\nc0-id=0\nc0-param0=string:17449\nc0-param1=string:CI\nc0-param2=boolean:false\nbatchId=1\n", 
		"LAST");

	web_submit_data("savePostMessage.html", 
		"Action=http://www.scholat.com/savePostMessage.html", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=postMessage.id", "Value=", "ENDITEM", 
		"Name=postMessage.userId", "Value=", "ENDITEM", 
		"Name=teamworkIds", "Value=", "ENDITEM", 
		"Name=pushToMyTeams", "Value=", "ENDITEM", 
		"Name=courseIds", "Value=", "ENDITEM", 
		"Name=pushToCourse", "Value=", "ENDITEM", 
		"Name=collectPMId", "Value=", "ENDITEM", 
		"Name=postMessage.title", "Value=1", "ENDITEM", 
		"Name=postMessage.security", "Value=0", "ENDITEM", 
		"Name=topTime", "Value=on", "ENDITEM", 
		"Name=discuss", "Value=on", "ENDITEM", 
		"Name=security797", "Value=0", "ENDITEM", 
		"Name=postMessage.content", "Value=<p>1</p>", "ENDITEM", 
		"LAST");

	web_url("postMessage.html", 
		"URL=http://www.scholat.com/postMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/images/loadingAnimation.gif", "ENDITEM", 
		"LAST");

	web_custom_request("getDynamicMessagesMobile_ajax.html_3", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getAllAddFriendsMsg_ajax.html_3", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("AllScholarShare_ajax.html_3", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("SharePatent_ajax.html_3", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("mobileCalendarShare_ajax.html_3", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("emailM-getUnreadCount_ajax.html_3", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("checkMobileApplyInfo_ajax.html_2", 
		"URL=http://www.scholat.com//checkMobileApplyInfo_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html_3", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ScholarUserType_ajax.html_3", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("ChatMng.update.dwr_3", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/postMessage.html\nhttpSessionId=\nscriptSessionId=577845DE2AE9B6CB4CC2B93E6DC8C040841\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:fQ\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=0\n", 
		"LAST");

	web_submit_data("TeamTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-14", "ENDITEM", 
		"LAST");

	web_submit_data("RecentTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-13", "ENDITEM", 
		"LAST");

	web_submit_data("FriendTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=node", "Value=xnode-12", "ENDITEM", 
		"LAST");

	web_find("Text Check", "What=SCHOLAT Ñ§ÕßÍø", "LAST");

	lr_end_transaction("fabudongtai",2);

	return 0;
}
# 5 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	lr_think_time(23);

	web_url("logout.html", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("logout.html_2", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 6 "d:\\vugen\\scripts\\fabudongtai\\\\combined_fabudongtai.c" 2

