// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2003-2006 - Stefan Kueng
// Copyright (C) 2012-2016, 2018-2023 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#include "stdafx.h"
#include "TortoiseProc.h"
#include "RevGraphBranchColorDlg.h"
#include "gittype.h"
#include "Git.h"
#include "BrowseRefsDlg.h"
#include "StringUtils.h"
#include <gdiplus.h>

#include "nlohmann/json.hpp"
using json = nlohmann::json;

IMPLEMENT_DYNAMIC(CRevGraphBranchColorDlg, CStandAloneDialog)

CRevGraphBranchColorDlg::CRevGraphBranchColorDlg(CWnd* pParent /*=nullptr*/)
	: CStandAloneDialog(CRevGraphBranchColorDlg::IDD, pParent)
{
}

CRevGraphBranchColorDlg::~CRevGraphBranchColorDlg()
{
}

void CRevGraphBranchColorDlg::DoDataExchange(CDataExchange* pDX)
{
	CStandAloneDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CRevGraphBranchColorDlg, CStandAloneDialog)
	ON_LBN_SELCHANGE(IDC_LIST2, &CRevGraphBranchColorDlg::OnLbnSelchangeList2)
END_MESSAGE_MAP()

BOOL CRevGraphBranchColorDlg::OnInitDialog()
{
	CStandAloneDialog::OnInitDialog();
	return TRUE;
}

void CRevGraphBranchColorDlg::OnOK()
{
	Gdiplus::Color color(128, 128, 128);

	CString branchname = L"Features";

	auto branchObj = json::object();
	branchObj["branchPattern"] = branchname.GetString();
	branchObj["branchColor"] = color.ToCOLORREF();

	auto result = json::array();
	result.push_back(branchObj);

	std::string jsonStr = result.dump();

	CString tempFile = L"test.json";
	FILE* fp = nullptr;
	_wfopen_s(&fp, tempFile, L"w+b");
	if (!fp)
		return;

	fwrite(jsonStr.c_str(), sizeof(char), jsonStr.length(), fp);
	fclose(fp);

	CStandAloneDialog::OnOK();
}


void CRevGraphBranchColorDlg::OnLbnSelchangeList2()
{
	// TODO: Add your control notification handler code here
}
