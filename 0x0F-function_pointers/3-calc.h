int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_functions(char *strng))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @fnction: The function 
 */
typedef struct op
{
	char *op;
	int (*fnction)(int x, int y);
} op_t;

#endif

