#ifndef __workspacetab__
#define __workspacetab__

#include <wx/panel.h>

class FileViewTree;
class wxComboBox;

class WorkspaceTab : public wxPanel {
	FileViewTree *m_fileView;
	wxComboBox *m_workspaceConfig;
	

	void OnCollapseAll(wxCommandEvent &event);
	void OnCollapseAllUI(wxUpdateUIEvent &event);
	void OnConfigurationManager(wxCommandEvent &e);
	void OnConfigurationManagerUI(wxUpdateUIEvent &e);
	void DoCollpaseAll();
	
protected:	
	void CreateGUIControls();
	
public:
	WorkspaceTab(wxWindow *parent);
	~WorkspaceTab();
	
	void BuildFileTree();
	void CollpaseAll();
	
	FileViewTree *GetFileView(){return m_fileView;}
	wxComboBox *GetComboBox(){return m_workspaceConfig;}
	
};
#endif // __workspacetab__
