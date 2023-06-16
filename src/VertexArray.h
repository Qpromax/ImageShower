class VertexArray
{
public:
	VertexArray(unsigned int id)
		:Renderer_ID(0)
	{

	}

	void bind()
	{
		glGenVertexArrays(1, &Renderer_ID);
	}

	void unbind()
	{

	}
private:
	unsigned int Renderer_ID;
};