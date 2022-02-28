#pragma once

#define MAX_SIZE 5

template<typename T>
class Stack
{
public:
	Stack()
	{
		ZeroMemory(datas, sizeof(T) * MAX_SIZE);
	}

	void Push(T data)
	{
		if (top + 1 >= MAX_SIZE)
		{
			cout << "Full" << endl;
			return;
		}

		datas[++top] = data;
	}

	T Pop()
	{
		if (top < 0)
		{
			cout << "Empty" << endl;
			return T();
		}
		
		T value = datas[top];
		--top;

		return value;
	}

private:
	T datas[MAX_SIZE];
	int top = -1;
};