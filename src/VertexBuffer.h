class VertexBuffer
{
public:
	VertexBuffer(unsigned int id, float vertices[])
		:Renderer_ID(id)
	{
		glBindBuffer(GL_ARRAY_BUFFER, Renderer_ID);
		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices))
	}

	void bind()
	{

	}

	void unbind()
	{

	}
private:
	unsigned int Renderer_ID;
};
