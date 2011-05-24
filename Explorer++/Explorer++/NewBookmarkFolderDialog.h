#ifndef NEWBOOKMARKFOLDERDIALOG_INCLUDED
#define NEWBOOKMARKFOLDERDIALOG_INCLUDED

#include "../Helper/BaseDialog.h"
#include "../Helper/ResizableDialog.h"
#include "../Helper/DialogSettings.h"
#include "../Helper/Bookmark.h"

class CNewBookmarkFolderDialog;

class CNewBookmarkFolderDialogPersistentSettings : public CDialogSettings
{
public:

	~CNewBookmarkFolderDialogPersistentSettings();

	static CNewBookmarkFolderDialogPersistentSettings &GetInstance();

private:

	friend CNewBookmarkFolderDialog;

	static const TCHAR SETTINGS_KEY[];

	CNewBookmarkFolderDialogPersistentSettings();

	CNewBookmarkFolderDialogPersistentSettings(const CNewBookmarkFolderDialogPersistentSettings &);
	CNewBookmarkFolderDialogPersistentSettings & operator=(const CNewBookmarkFolderDialogPersistentSettings &);
};

class CNewBookmarkFolderDialog : public CBaseDialog
{
public:

	CNewBookmarkFolderDialog(HINSTANCE hInstance,int iResource,HWND hParent);
	~CNewBookmarkFolderDialog();

protected:

	BOOL	OnInitDialog();
	BOOL	OnCommand(WPARAM wParam,LPARAM lParam);
	BOOL	OnClose();

private:

	void	OnOk();
	void	OnCancel();

	CNewBookmarkFolderDialogPersistentSettings	*m_pnbfdps;
};

#endif