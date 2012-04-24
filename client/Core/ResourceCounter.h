#ifndef	_FX_RESOURCE_COUNTER_H_EWEHQW9E23GAVXVAPQPQPFK23T0UDFKLGJLKJQEDQ
#define	_FX_RESOURCE_COUNTER_H_EWEHQW9E23GAVXVAPQPQPFK23T0UDFKLGJLKJQEDQ

enum
{
	RESCOUNTER_TEXTURE_MODEL_MAP	=	0,
	RESCOUNTER_TEXTURE_MODEL_LIGHTMAP,
	RESCOUNTER_TEXTURE_MODEL_OTHERS,
	RESCOUNTER_TEXTURE_CHAR_PC,
	RESCOUNTER_TEXTURE_CHAR_NPC,
	RESCOUNTER_TEXTURE_CHAR_MONSTER,
	RESCOUNTER_TEXTURE_INTERFACE,
	RESCOUNTER_MESH_MODEL_MAP,
	RESCOUNTER_MESH_MODEL_ITEM,
	RESCOUNTER_MESH_MODEL_EFFECT,
	RESCOUNTER_MESH_CHAR_PC,
	RESCOUNTER_MESH_CHAR_NPC,
	RESCOUNTER_MESH_CHAR_MONSTER,
	RESCOUNTER_ANIM_CHAR_PC,
	RESCOUNTER_ANIM_CHAR_NPC,
	RESCOUNTER_ANIM_CHAR_MONSTER,
	RESCOUNTER_CHAR_CHARACTERMANAGER,
	RESCOUNTER_CHAR_ANIMATIONMANAGER,
	RESCOUNTER_CHAR_ITEMMANAGER,
	RESCOUNTER_CHAR_SKINMANAGER,
	RESCOUNTER_CHAR_AURARENDERER,
	RESCOUNTER_CHAR_ITEMRENDERER,
	RESCOUNTER_CHAR_SKINRENDERER,
	RESCOUNTER_SKEL,
	RESCOUNTER_ETC,
	RES_DATATYPE_NUM,
};

enum
{
	RESCOUNTER_VB_DEFAULT	=	0,
	RESCOUNTER_VB_MANAGED,
	RESCOUNTER_IB_DEFAULT,
	RESCOUNTER_IB_MANAGED,
	RESCOUNTER_TEXTURE_DEFAULT,
	RESCOUNTER_TEXTURE_MANAGED,
	RES_MEMTYPE_NUM,
};

extern char	*RES_DATATYPE_TEXT[];
extern char	*RES_MEMTYPE_TEXT[];

 
 
 
 
 
 
class	CResCounter
{
public:
	CResCounter();
	~CResCounter();

	void	Clear	();
	void	EnableResCounter	();
	void	DisableResCounter	();
	void	LockResCounter		();
	bool	Enabled	()	{	return	m_enabledState;	}

	void	Reset_DataType		(	int	in_dataType	);
	void	Reset_MemoryType	(	int	in_memType	);

	int		Add_DataType	(	int	in_dataType,	int		in_size	);
	int		Add_MemoryType	(	int	in_memType,		int		in_size	);

	int		PrintOut	();

protected:
	bool	m_enabledState;
	bool	m_lockedState;

	int		m_sizeDataType[	RES_DATATYPE_NUM ];
	int		m_dataCount;

	int		m_sizeMemType[ RES_MEMTYPE_NUM ];
	int		m_memCount;
};

extern CResCounter	*g_resCounter;

#endif	