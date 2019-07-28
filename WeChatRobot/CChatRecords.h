#pragma once


// CChatRecords 对话框

class CChatRecords : public CDialogEx
{
DECLARE_DYNAMIC(CChatRecords)

public:
	CChatRecords(CWnd* pParent = nullptr); // 标准构造函数
	virtual ~CChatRecords();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHAT_RECORDS };
#endif

protected:
	void DoDataExchange(CDataExchange* pDX) override; // DDX/DDV 支持

DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ChatRecord;
	BOOL OnInitDialog() override;
	afx_msg BOOL OnCopyData(CWnd* pWnd, COPYDATASTRUCT* pCopyDataStruct);
protected:
	afx_msg LRESULT OnShowmessage(WPARAM wParam, LPARAM lParam);
};
