#pragma once


// CDecryptImage 对话框

class CDecryptImage : public CDialogEx
{
DECLARE_DYNAMIC(CDecryptImage)

public:
	CDecryptImage(CWnd* pParent = nullptr); // 标准构造函数
	virtual ~CDecryptImage();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DECRYPT_IMAGE };
#endif

protected:
	void DoDataExchange(CDataExchange* pDX) override; // DDX/DDV 支持

DECLARE_MESSAGE_MAP()
public:
	CString m_ImagePath;
	afx_msg void OnBnClickedDecryptimage();
	afx_msg void OnDropFiles(HDROP hDropInfo);
	CString m_imagepath;
	BOOL OnInitDialog() override;
	CString m_key;
};
