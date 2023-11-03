#include "hash_tables.h"

/**
 * hash_table_print - function to print the key value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t  *bucket;
	int un_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		bucket = ht->array[k];
		while (bucket)
		{
			if (un_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			un_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
