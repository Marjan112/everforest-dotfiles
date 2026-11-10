return {
  'nvim-treesitter/nvim-treesitter',
  lazy = false,
  build = ':TSUpdate',
  config = function()
    require("nvim-treesitter").install({
      ensure_installed = {
        "c",
        "rust",
        "python",
        "bash",
        "lua",
        "markdown"
      }
    })

    vim.api.nvim_create_autocmd("FileType", {
      callback = function()
        pcall(vim.treesitter.start)
      end
    })
  end
}
