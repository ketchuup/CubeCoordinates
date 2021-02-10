void generate(std::vector <float> &coordinates, int dimension)
{
	long long maximum, current = 0;
	maximum = 1 << dimension;

	while (current < maximum)
	{
		for (int bit = 0; bit < dimension; ++bit)
		{
			coordinates.push_back((static_cast <float> ((current >> bit) & 1) - 0.5f) * 2.0f);
		}

		++current;
	}
}
