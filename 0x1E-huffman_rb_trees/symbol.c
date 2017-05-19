#include "huffman.h"

/**
 * symbol_create - creates new symbol
 * @data: data that is stored in structure
 * @freq: frequiency that is to be stored in structure
 * Return: pointer to new structure
 */
symbol_t *symbol_create(char data, size_t freq)
{
	symbol_t *add_symbol;

	add_symbol = malloc(sizeof(symbol_t));
	if (!add_symbol)
		return (NULL);
	add_symbol->data = data;
	add_symbol->freq = freq;

	return (add_symbol);
}
