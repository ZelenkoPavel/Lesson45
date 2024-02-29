

void finding_product_and_sum_number(int* vector, int size, int& product_even_number, int& sum_number) {
	if (size <= 0) {
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (vector[i] % 2 == 0 && vector[i] != 0) {
			product_even_number *= *(vector + i);
		}
	}


	int first_zero = 0;
	int last_zero = size - 1;
	for (int j = 0; j < size; j++)
	{
		if (vector[j] == 0) {
			first_zero = j + 1;
			break;
		}
	}
	for (int k = first_zero; k < size; k++)
	{
		if (vector[k] == 0) {
			last_zero = k;
		}
	}

	for (int l = first_zero; l < last_zero; l++)
	{
		sum_number += *(vector + l);
	}

	return;
}
