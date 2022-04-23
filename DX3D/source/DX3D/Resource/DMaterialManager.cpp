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

#include <DX3D/Resource/DMaterialManager.h>
#include <DX3D/Resource/DMaterial.h>
#include <filesystem>


DMaterialManager::DMaterialManager(DGraphicsEngine* graphicsEngine) : DGraphicsManager(graphicsEngine)
{
}

DMaterialManager::~DMaterialManager()
{
}

DMaterialPtr DMaterialManager::createMaterialFromFile(const wchar_t* file_path)
{
	std::wstring full_path = std::filesystem::absolute(file_path);
	auto it = m_map_resources.find(full_path);
	if (it != m_map_resources.end()) return std::make_shared<DMaterial>(std::static_pointer_cast<DMaterial>(it->second), this);
	else return std::static_pointer_cast<DMaterial>(createResourceFromFile(file_path));	
}

DMaterialPtr DMaterialManager::createMaterial(const DMaterialPtr& material)
{
	return std::make_shared<DMaterial>(material,this);
}

DResource* DMaterialManager::createResourceFromFileConcrete(const wchar_t* file_path)
{

	return new DMaterial(file_path, this);
	
}