#ifndef HOLBERTON_H
#define HOLBERTON_Hhash_table_t *hash_table_create(unsigned long int size);


where size is the size of the array

unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);


where key is the key
and size is the size of the array of the hash table

int hash_table_set(hash_table_t *ht, const char *key, const char *value);


Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string

char *hash_table_get(const hash_table_t *ht, const char *key);


where ht is the hash table you want to look into
and key is the key you are looking for

void hash_table_print(const hash_table_t *ht);


where ht is the hash table

void hash_table_delete(hash_table_t *ht);


where ht is the hash table

#endif
