int Floor(BinaryTreeNode<int> *node, int input)
{
	int floor = -1;
	BinaryTreeNode<int>* temp=node;
	//greatest element smaller than input
	while(temp)
	{
		if(temp->data == input) return input;
		else if(temp->data < input)
		{
			floor = temp->data;
			temp=temp->right;
		}
		else if(temp->data > input)
		{
			temp=temp->left;
		}
	}
	return floor;
}
