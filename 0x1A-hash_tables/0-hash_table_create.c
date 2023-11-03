#include "hash_tables.h"

/**
 * hash_table_create - Create a Hash Table
 * @size: The size of the hash table
 * Description: Allocates memory for a hash table with the given size.
 * Return: NULL if an error occurred or a pointer to the created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);
    
    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_table->array) * size);
    if (hash_table->array == NULL)
        return (NULL);
    
    return (hash_table);
}
