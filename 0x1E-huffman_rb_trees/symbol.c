#include "huffman.h"

/**
 * symbol_create - function that creates a new symbol data structure
 * @data: data that is to be stored in structure
 * @freq: frequienct that is to be stored in structure
 * Return: pointer to new structure
 */
symbol_t *symbol_create(char data, size_t freq)
{
	symbol_t *new_symbol;

	new_symbol = malloc(sizeof(symbol_t));
	if (!new_symbol)
		return (NULL)
	new_symbol->data = data;
	new_symbol->freq = freq;

	return (new_symbol);
}
