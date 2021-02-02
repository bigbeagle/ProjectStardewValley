#pragma once
#include "decleration.h"

//����ȭ�� Ÿ��
#define TILESIZE 16
#define TILEX 100
#define TILEY 100
#define DISPLAYX 30
#define DISPLAYY 30
#define TILESIZEX (TILEX * TILESIZE) //640
#define TILESIZEY (TILEY * TILESIZE) //640

//�̹��� Ÿ�� (ȭ�� ������ܿ� �ٿ����� ����Ÿ��)
#define SAMPLEDISPLAYX 20
#define SAMPLEDISPLAYY 20

//�������� ����� ��Ʈ��
enum CTRL
{
	CTRL_SAVE, CTRL_LOAD,
	CTRL_TERRAIN, CTRL_OBJECT, CTRL_ERASER,
	CTRL_OBJECTDELETE, 
	CTRL_OBJECT2,
	CTRL_MINETERRAIN,
	CTRL_MINEOBJECT
};

enum MINEMAP
{
	MINE_NORMAL,
	MINE_NORMALDARK,
	MINE_FROST,
	MINE_FROSTDARK
};

enum SEASON
{
	SPRING,
	SUMMER,
	AUTUMN,
	WINTER,
};

//����
enum TERRAIN
{
	TR_GROUND, TR_GRASS, TR_SOIL, TR_HACKED, TR_WATER, TR_END
};

//������Ʈ
enum OBJECT
{
	OBJ_NONE,
	OBJ_SEED,
	OBJ_DESTRUCTIBLE,
	OBJ_INDESTRUCTIBLE,
	OBJ_BUILDING,
	OBJ_EQUIPMENT,
};

enum OBJ_OVERLAPPED
{
	OVR_NONE,
	OVR_OVER
};

enum OBJ_TYPE
{
	OTY_NONE,
	OTY_STONE,
	OTY_LARGESTONE,
	OTY_BRANCH,
	OTY_TREE,
	OTY_TREETRUNK,
	OTY_HARDTREE,
	OTY_CROP,
	OTY_WEED,
	OTY_GRASS,
	OTY_MONSTER,
	OTY_ORE,
	OTY_SPRINKLER1,
	OTY_SPRINKLER2,
	OTY_SPRINKLER3,
	OTY_WOODENFENCE,
	OTY_STONEFENCE,
	OTY_WELL,
	OTY_HOUSE,
	OTY_SHOP,
	OTY_TOWER,
	OTY_BARN,
	OTY_BOX,
	OTY_SCARECROW,
	OTY_TOMATOSCARECROW,
	OTY_BLASTFURNACE,
	OTY_MINELADDER,
	OTY_END
};

enum PORTAL
{
	PT_NONE,
	PT_HOUSE,
	PT_CHICKENHOUSE,
	PT_BARN,
	PT_SHOP,
	PT_MINE,
	PT_TOWER
};

//Ÿ�ϱ���ü
struct tagTile
{
	TERRAIN terrain;
	OBJECT obj;
	OBJ_TYPE objType;
	OBJ_OVERLAPPED objOver;
	SEED seedType;
	RECT rc;
	tagTree tree;
	PORTAL portal;

	int terrainFrameX;
	int terrainFrameY;
	int objFrameX;
	int objFrameY;
	int ovlFrameX;
	int ovlFrameY;
	int wetFrameX;
	int wetFrameY;
	int grownLevel;

	bool isWet;
	bool isFullyGrown;
};

//�̹��� Ÿ�� ����ü
struct tagSampleTile
{
	RECT rc;
	int terrainFrameX;
	int terrainFrameY;
};

//����Ÿ�� ����ü
struct tagCurrentTile
{
	int x, y;
};