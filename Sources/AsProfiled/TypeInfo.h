#pragma once
#include "cor.h"
#include "common.h"

class CTypeInfo
{
public:
	CTypeInfo(IMetaDataImport* pMetaDataImport, mdTypeDef typeToken);
	~CTypeInfo(void);
	WCHAR* GetName();
private:
	mdTypeDef typeDefToken;
	IMetaDataImport* metaDataImport;
	WCHAR* name; 
};