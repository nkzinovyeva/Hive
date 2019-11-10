/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:21:32 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/19 16:25:26 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_words_count(char *str) //считаем кол-во слов
{
	int i;
	int words_count;
	
	words_count = 0;
	i = 0;
	while (str[i]) //пока существуют символы
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') //если символ равен разделителю прокручиваем позицию
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i]) // если не равен разделителю то мы нашли слово
		{
			words_count++; //увеличиваем счетчик слов на единицу
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])// прокручиваем символы дальше до следующего разделителя
			{
				i++;
			}
		}
	}
	return (words_count);
}

void ft_allocate_strings_on_array(char *str, char **arr)//выделение памяти под массив
{
	int i;
	int j;
	int word_size;
	char *word;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') // если натыкаемся на разделитель то берем следующий
			i++;
		word_size = 0;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])// если не разделитель то начинаем считать количество букв
		{
			word_size++;
			i++;
		}
		if (word_size != 0) // если размер слова не нулевой то :
		{
			word = (char*)malloc((sizeof(char) * (word_size + 1)));//выделяем память под слово
			arr[j] = word; // добавляем выделенное место в массив
			j++;
		}
	}
}

void ft_fill_strings_with_characters(char *str, char **arr) // делаем все тоже что и в предыдущей функции только заполняем массив переменными
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			k = 0;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			{
				arr[j][k++] = str[i++]; //заполняем массив построчно 
			}
			arr[j][k] = '\0';
			j++;
		}
	}
}

char **ft_split_whitespaces(char *str)
{
	int words_count;
	char **arr;

	words_count = ft_words_count(str); //считаем слова
	arr = (char**)malloc((sizeof(char*) * words_count) + sizeof(0));
	if (words_count > 0) //если слова есть
	{
		ft_allocate_strings_on_array(str, arr); //выделяем память
		ft_fill_strings_with_characters(str, arr); //заполняем массив
		arr[words_count] = 0;//ставим последний элемент массива в ноль
	}
	else
		arr[0] = 0;
	return (arr);
}
