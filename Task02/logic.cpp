

void finding_quantity_and_sum_number(int* vector, int size,
	int& quantity_positive_num, int& sum_number) {
	if (size <= 0) {
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (vector[i] > 0) {
			quantity_positive_num++;
		}
	}

	int last_zero = size;
	for (int j = 0; j < size; j++)
	{
		if (vector[j] == 0) {
			last_zero = j + 1;
		}
	}

	for (int l = last_zero; l < size; l++)
	{
		sum_number += *(vector + l);
	}

	return;
}