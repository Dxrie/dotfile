return {
  {
    "stevearc/conform.nvim",
    opts = {
      formatters_by_ft = {
        ["python"] = { "black" },
        ["php"] = { "pretty-php" },
        ["typescript"] = { "prettierd" },
        ["rust"] = { "ast-grep" },
      },
    },
  },
}
