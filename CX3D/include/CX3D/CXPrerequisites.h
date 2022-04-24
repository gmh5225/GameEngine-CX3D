/*MIT License

CX3D Game Framework (https://github.com/PardCode/CX3D)

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

#pragma once
#include <memory>

class  CXSwapChain;
class  CXeviceContext;
class  CXVertexBuffer;
class  CXIndexBuffer;
class  CXConstantBuffer;
class  CXVertexShader;
class  CXPixelShader;
class  CXGraphicsEngine;
class  CXResource;
class  CXResourceManager;
class  CXTexture;
class  CXTextureManager;
class  CXMesh;
class  CXMeshManager;
class  CXMaterial;
class  CXWindow;
class  CXMeshEntity;

typedef std::shared_ptr<CXSwapChain> CXSwapChainPtr;
typedef std::shared_ptr<CXeviceContext> CXeviceContextPtr;
typedef std::shared_ptr<CXVertexBuffer> CXVertexBufferPtr;
typedef std::shared_ptr<CXIndexBuffer> CXIndexBufferPtr;
typedef std::shared_ptr<CXConstantBuffer> CXConstantBufferPtr;
typedef std::shared_ptr<CXVertexShader> CXVertexShaderPtr;
typedef std::shared_ptr<CXPixelShader> CXPixelShaderPtr;
typedef std::shared_ptr<CXResource> CXResourcePtr;
typedef std::shared_ptr<CXTexture> CXTexturePtr;
typedef std::shared_ptr<CXMesh> CXMeshPtr;
typedef std::shared_ptr<CXMaterial> CXMaterialPtr;
typedef std::shared_ptr<CXMeshEntity> CXMeshEntityPtr;


typedef unsigned int ui32;
typedef int i32;
typedef float f32;
typedef double d64;


enum class  CXKey
{
	 Escape = 0,
	 Shift,
	 A,
	 B,
	 C,
	 D,
	 E,
	 F,
	 G,
	 H,
	 I,
	 J,
	 K,
	 L,
	 M,
	 N,
	 O,
	 P,
	 Q,
	 R,
	 S,
	 T,
	 U,
	 V,
	 W,
	 X,
	 Y,
	 Z,
	 N0,
	 N1,
	 N2,
	 N3,
	 N4,
	 N5,
	 N6,
	 N7,
	 N8,
	 N9,
	 F1,
	 F2,
	 F3,
	 F4,
	 F5,
	 F6,
	 F7,
	 F8,
	 F9,
	 F10,
	 F11,
	 F12,
};

enum class  CXTextureType
{
	Normal = 0,
	RenderTarget,
	DepthStencil
};

enum class  CXMouseButton
{
	Left = 0,
	Middle,
	Right
};


enum class  CXCullMode
{
	Front = 0,
	Back
};


struct CXMaterialSlot
{
	size_t start_index = 0;
	size_t num_indices = 0;
	size_t material_id = 0;
};





#if defined(_WIN32) || defined(_WIN64)
	#include <d3d11.h>
	#include <wrl.h>
#endif