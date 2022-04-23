/*MIT License

C++ 3D Game Tutorial Series (https://github.com/PardCode/CPP-3D-Game-Tutorial-Series)

Copyright (c) 2019-2022, PardCode

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#include <DX3D/Game/DMeshEntity.h>
#include <DX3D/Resource/DMesh.h>

DMeshEntity::DMeshEntity()
{
}

DMeshEntity::~DMeshEntity()
{
}


void DMeshEntity::setMesh(const DMeshPtr& mesh)
{
	m_mesh = mesh;
}

void DMeshEntity::addMaterial(const DMaterialPtr& material)
{
	m_materials.push_back(material);
}

void DMeshEntity::removeMaterial(ui32 index)
{
	m_materials.erase(std::next(m_materials.begin(),index));
}

DMeshPtr DMeshEntity::getMesh()
{
	return m_mesh;
}

std::vector<DMaterialPtr>& DMeshEntity::getMaterials()
{
	return m_materials;
}