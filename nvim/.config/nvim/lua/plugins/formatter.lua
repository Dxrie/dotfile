return {
  {
    "stevearc/conform.nvim",
    opts = {
      formatters_by_ft = {
        ["python"] = { "black" },
        ["php"] = { "pretty-php" },
        ["typescript"] = { "prettierd" },
        ["css"] = { "prettierd" },
        ["rust"] = { "ast-grep" },
        ["json"] = { "prettierd" },
        ["jsonc"] = { "prettierd" },
        ["blade"] = { "blade-formatter" },
        ["xml"] = { "xmlformatter" },
      },
    },
  },
}
